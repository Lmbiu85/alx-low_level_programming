#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

#define BUFFER_SIZE 128

/**
 * print_magic_number - Print the magic number of the ELF file.
 * @header: A pointer to the ELF header.
 */
void print_magic_number(Elf64_Ehdr *header)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);

	printf("\n");
}

/**
 * print_class - Print the class of the ELF file.
 * @header: A pointer to the ELF header.
 */
void print_class(Elf64_Ehdr *header)
{
	printf("  Class:                             ");

	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
			break;
	}
}

/**
 * print_data - Print the data encoding of the ELF file.
 * @header: A pointer to the ELF header.
 */
void print_data(Elf64_Ehdr *header)
{
	printf("  Data:                              ");

	switch (header->e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", header->e_ident[EI_DATA]);
			break;
	}
}

/**
 * print_version - Print the version of the ELF file.
 * @header: A pointer to the ELF header.
 */
void print_version(Elf64_Ehdr *header)
{
	printf("  Version: %d", header->e_ident[EI_VERSION]);

	if (header->e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}

/**
 * print_osabi - Print the operating system/ABI of the ELF file.
 * @osabi: A pointer to the ELF header.
 */
void print_osabi(unsigned char osabi)
{
	switch (osabi)
	{
		case ELFOSABI_SYSV: /* System V ABI */
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX: /* HP-UX */
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD: /* NetBSD. */
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX: /* GNU/Linux */
			printf("UNIX - GNU/Linux\n");
			break;
		case ELFOSABI_SOLARIS: /* Sun Solaris */
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX: /* IRIX */
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD: /* FreeBSD */
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64: /* TRU64 UNIX */
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM: /* ARM architecture */
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE: /* Standalone (embedded) application */
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", osabi);
	}
}
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <ELF file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, "Failed to read ELF header\n");
		exit(EXIT_FAILURE);
	}

	print_magic_number(&header);
	print_class(&header);
	print_data(&header);
	print_version(&header);
	print_osabi(header.e_ident[EI_OSABI]);

	close(fd);
	return 0;
}
