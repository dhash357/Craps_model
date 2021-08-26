CXX=g++
CXXFLAGS= -Wall

APP=craps

SRC=src
OBJ=obj
BIN=bin


$(BIN)\$(APP): $(OBJ)\craps.o $(OBJ)\dice.o 
	$(CXX) $(CXXFLAGS) -o $@ $<


$(OBJ)\craps.o: $(SRC)\craps.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<


$(OBJ)\dice.o: $(SRC)\dice.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<


#_OBJF=craps.o dice.obj
#OBJF=$(patsubst %,$(OBJ)\%,$(_OBJF))
#
#$(BIN)\$(APP): $(OBJF)
#	$(CXX) $(CXXFLAGS) -o $@ $<
#
#$(OBJ)\%.o : $(SRC)\%.cpp
#	$(CXX) $(CXXFLAGS) -o $@ -c $<
#
#$(OBJ)\dice.o: $(SRC)\dice.cpp
#	$(CXX) $(CXXFLAGS) $(SRC)\dice.cpp -o $(OBJ)\dice.o


clean:
	rm -f $(OBJ)/*.o 
	rm -f $(BIN)/*.exe
