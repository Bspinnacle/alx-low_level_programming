#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
/**
 * check_elf - a function that checks if a file is an ELF file
 * @e_ident: an array of bytes
 *
 * Return: no return but exit with 98 if file is not an ELF file
 */

void check_elf(unsigned char *e_ident)
{
	int id;

	for (id = 0; id < 4; id++)
	{
		if (e_ident[id] != 127 && e_ident[id] != 'E' && e_ident[id] != 'L'
				&& e_ident[id] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: This is not an ELF file\n");
			exit(98);
		}
	}
}

void print_magic(unsigned char *e_ident);

/**
* print_magic - a function that prints the magic numbers of an ELF header
* @e_ident: an array of bytes
*
* Return: no return
*/

void print_magic(unsigned char *e_ident)
{
	int id;

	printf("Magic: ");

	for (id = 0; id < EI_NIDENT; id++)
	{
	printf("%02x", e_ident[id]);

	if (id == EI_NIDENT - 1)
		printf("\n");
	else
		printf(" ");
	}
}

void print_class(unsigned char *e_ident);
/**
* print_class - a function that prints the class of an ELF header
* @e_ident: an array of bytes
*
* Return: no return
*/

void print_class(unsigned char *e_ident)
{
	printf("Class: ");
	switch (e_ident[EI_CLASS])

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
	printf("<unknown class: %x>\n", e_ident[EI_CLASS]);
	}
}

void print_data(unsigned char *e_ident);
/**
* print_data - a function that prints the data of an ELF header
* @e_ident: an array of bytes
*
* Return: no return
*/

void print_data(unsigned char *e_ident)
{
	printf("Data: ");

	switch (e_ident[EI_DATA])

	{
		case ELFDATANONE:
		printf("none\n");
		break;

		case ELFDATA2LSB:
		printf("Complement of twos, little endian\n");
		break;

		case ELFDATA2MSB:
		printf("Complement of twos, big endian\n");
		break;

	default:
	printf("<unknown class: %x>\n", e_ident[EI_CLASS]);
	}
}


void print_version(unsigned char *e_ident);
/**
* print_version - a function that prints the version of an ELF header
*
* @e_ident: an array of bytes
*
* Return: no return
*/

void print_version(unsigned char *e_ident)
{
	 printf("Version: %d", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
		printf("current\n");
		break;

	default:
	printf("\n");
	break;
	}
}

void print_osabi(unsigned char *e_ident);
/**
* print_osabi - a function that prints the OS/ABI of an ELF header
* @e_ident: an array of bytes
*
* Return: no return
*/

void print_osabi(unsigned char *e_ident)
{
	printf("OS/ABI: ");

	switch (e_ident[EI_OSABI])

	{
		case ELFOSABI_NONE:
		printf("UNIX System V ABI\n");
		break;

		case ELFOSABI_HPUX:
		printf("HP-UX ABI\n");
		break;

		case ELFOSABI_NETBSD:
		printf("NetBSD ABI\n");
		break;

		case ELFOSABI_LINUX:
		printf("inux ABI\n");
		break;

		case ELFOSABI_SOLARIS:
		printf("Solaris ABI\n");
		break;

		case ELFOSABI_IRIX:
		printf("IRIX ABI\n");
		break;

		case ELFOSABI_FREEBSD:
		printf("FreeBSD ABI\n");
		break;

		case ELFOSABI_TRU64:
		printf("TRU64 UNIX ABI\n");
		break;

		case ELFOSABI_ARM:
		printf("ARM Architecture ABI\n");
		break;

		case ELFOSABI_STANDALONE:
		printf("Stand-alone (embedded) ABI\n");
		break;

	default:
	printf("<unknown class: %x>\n", e_ident[EI_OSABI]);
	}
}

void print_abi(unsigned char *e_ident);
/**
* print_abi - a function that prints the ABI version of an ELF header
* @e_ident: an array of bytes
*
* Return: no return
*/

void print_abi(unsigned char *e_ident)
{
	printf("ABI Version: %d\n",
	e_ident[EI_ABIVERSION]);
}

void print_type(unsigned int e_type, unsigned char *e_ident);
/**
* print_type - a function that prints the type of an ELF header
* @e_type: object file type
* @e_ident: an array of bytes
*
* Return: no return
*/

void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	e_type >>= 8;

	printf("Type: ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE - An unknown type\n");
		break;
	case ET_REL:
		printf("REL - A relocatable file\n");
		break;
	case ET_EXEC:
		printf("EXEC - An executable file\n");
		break;
	case ET_DYN:
		printf("DYN - A Shared object file\n");
		break;
	case ET_CORE:
		printf("CORE - A core file)\n");
		break;
	default:
		printf("<unknown class: %x>\n", e_type);
	}
}

void print_entry(unsigned long int e_entry, unsigned char *e_ident);
/**
* print_entry - a function that prints the entry point of an ELF header
* @e_entry: entry point of an ELF header
* @e_ident: an array of bytes
*
* Return: no return
*/

void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("Elf header entry address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
	e_entry = ((e_entry << 8) & 0xFF00FF00) |
	((e_entry >> 8) & 0xFF00FF);
	e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
	printf("%#x\n", (unsigned int)e_entry);

	else
	printf("%#lx\n", e_entry);
}

void close_elf(int elf);
/**
* close_elf - a function that closes an ELF file
* @elf: elf file descriptor
*
* Return: no return
*/

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
	dprintf(STDERR_FILENO,
		"Error: Cannot close file %d\n", elf);
		exit(98);
	}
}

/**
* main - a function that displays the information contained in the ELF header
* at the start of an ELF file.
* @argc: The number of given arguments
* @argv: An array of pointers to the arguments
*
* Return: 0 on success
*
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
		{
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
		exit(98);
		}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
		{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
		exit(98);
		}
	r = read(o, header, sizeof(Elf64_Ehdr));

	if (r == -1)
		{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: file does not exist\n", argv[1]);
		exit(98);
		}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(o);
	return (0);
}
