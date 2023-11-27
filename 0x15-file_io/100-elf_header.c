#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_error_and_exit(const char *error_message) {
	    fprintf(stderr, "%s\n", error_message);
	        exit(98);
}

void display_elf_header(const char *filename) {
	    int fd;
	        Elf64_Ehdr elf_header;
		    ssize_t read_result;
		        size_t i;

			    fd = open(filename, O_RDONLY);
			        if (fd == -1) {
					        print_error_and_exit("Error: Unable to open file");
						    }

				    read_result = read(fd, &elf_header, sizeof(Elf64_Ehdr));
				        if (read_result != sizeof(Elf64_Ehdr)) {
						        close(fd);
							        print_error_and_exit("Error: Unable to read ELF header");
								    }

					    if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
							            elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
								            elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
									            elf_header.e_ident[EI_MAG3] != ELFMAG3) {
						            close(fd);
							            print_error_and_exit("Error: Not an ELF file");
								        }

					        printf("  Magic:   ");
						    for (i = 0; i < EI_NIDENT; i++) {
							            printf("%02x ", elf_header.e_ident[i]);
								        }
						        printf("\n");

							    printf("  Class:                             %s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
							        printf("  Data:                              %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
								    printf("  Version:                           %d (current)\n", elf_header.e_ident[EI_VERSION]);
								        printf("  OS/ABI:                            %d\n", elf_header.e_ident[EI_OSABI]);
									    printf("  ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);

									        printf("  Type:                              %s\n", elf_header.e_type == ET_EXEC ? "EXEC (Executable file)" :
												                                                            elf_header.e_type == ET_DYN ? "DYN (Shared object file)" :
																			                                                                elf_header.e_type == ET_REL ? "REL (Relocatable file)" :
																											                                                            "Unknown");

										    printf("  Entry point address:               %#lx\n", (unsigned long)elf_header.e_entry);

										        close(fd);
}

int main(int argc, char *argv[]) {
	 
	        if (argc != 2) {
			        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
				        return 98;
					    }

		    display_elf_header(argv[1]);

		        return 0;
}

