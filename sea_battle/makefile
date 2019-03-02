all: battleship 

CC := g++
SOURCES := $(wildcard src/*.cpp)
OBJECTS := $(patsubst src/%.cpp, obj/%.o, $(SOURCES))
DEPENDS := $(patsubst src/%.cpp, obj/%.dep,$(SOURCES))

battleship :  $(OBJECTS) ./bin
	$(CC) $(OBJECTS) -o ./bin/$@

./bin : 
	mkdir -p bin

./obj: 
	mkdir -p obj

clean: 
	rm -rf ./obj/*.o ./bin/*

obj/%.dep : src/%.cpp
	mkdir -p obj
	$(CC) -I./inc -MM $< -MT "$@ $(patsubst obj/%.dep,obj/%.o,$@)" -o $@

obj/%.o : src/%.cpp ./obj 
	$(CC) -c -I./inc  $< -o $@ 

-include $(DEPENDS)
