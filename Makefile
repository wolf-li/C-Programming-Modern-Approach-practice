edit: main.o
        cc -o main main.o -std=c99

main.o: main.c
        cc -c main.c -std=c99

clean:
        rm main main.o