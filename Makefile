compile:
	rm -f build/*.exe
	g++ src/*.cpp src/*.c -Llib -Iinclude -lglfw3dll -lopengl32 -o build/Prac1.exe
	build/Prac1.exe
clean:
	rm -f build/*.o build/*.exe