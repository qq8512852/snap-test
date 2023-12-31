objs = main.o 

dep_files := $(patsubst %,.%.d, $(objs))
dep_files := $(wildcard $(dep_files))

CFLAGS = -Werror -I.

main: $(objs)
	gcc -o main $^

ifneq ($(dep_files),)
include $(dep_files)
endif

%.o : %.c
	gcc $(CFLAGS) -c -o $@ $< -MD -MF .$@.d

clean:
	rm *.o test

distclean:
	rm $(dep_files)

.PHONY: clean

