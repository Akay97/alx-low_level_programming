#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

typedef struct {
	unsigned char magic[4];
	unsigned char class;
	unsigned char data;
	unsigned char version;
	unsigned char os_abi;
	unsigned char abi_version;
	char pad[7];
	short type;
	short machine;
	int version2;
	unsigned long entry;
	unsigned long phoff;
	unsigned long shoff;
	int flags;
	short ehsize;
	short phentsize;
	short phnum;
	short shentsize;
	short shnum;
	short shstrndx;
} ElfHeader;

void print_elf_header(const ElfHeader *header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < 4; ++i)
	{
	printf("%02x ", header->magic[i]);
	}
	printf("\n  Class: %s\n", header->class == 1 ? "ELF32" : (header->class == 2 ? "ELF64" : "Invalid"));
	printf("Data: %s\n", header->data == 1 ? "2's complement, little endian" : (header->data == 2 ? "2's complement, big endian" : "Invalid"));
	printf("Version: %d (current)\n", header->version);
	printf("OS/ABI: %d\n", header->os_abi);
	printf("ABI Version: %d\n", header->abi_version);
	printf("Type: %d\n", header->type);
	printf("Entry point address:%lx\n", header->entry);
}

int main(int argc, char *argv[]) {
	int fd;
	ssize_t read_size;

	if (argc != 2)
	{
        	dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return 98;
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error");
		return 98;
	}
	ElfHeader header;
	read_size = read(fd, &header, sizeof(ElfHeader));
	if (read_size == -1 || read_size != sizeof(ElfHeader) || header.magic[0] != 0x7f || header.magic[1] != 'E' || header.magic[2] != 'L' || header.magic[3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		close(fd);
		return 98;
	}

	print_elf_header(&header);

	close(fd);
	return 0;
}
