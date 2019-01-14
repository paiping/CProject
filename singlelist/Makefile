./bin/singlelist:./obj/singlelist.o ./obj/main.o
	gcc ./obj/singlelist.o ./obj/main.o -o ./bin/singlelist
./obj/main.o:./src/main.c
	gcc -c ./src/main.c -o ./obj/main.o -I./inc -g
./obj/singlelist.o:./src/singlelist.c
	gcc -c ./src/singlelist.c -o ./obj/singlelist.o -I./inc -g 
.PHONY:clean
clean:
	rm ./bin/*
	rm ./obj/*.o
