cmd_/home/nora/driver/8188eu/8188eu.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000 -T ./scripts/module-common.lds  --build-id  -o /home/nora/driver/8188eu/8188eu.ko /home/nora/driver/8188eu/8188eu.o /home/nora/driver/8188eu/8188eu.mod.o ;  true