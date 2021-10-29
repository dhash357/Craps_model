CXX=g++
CXXFLAGS= -Wall

APP=Craps

SRC=src
OBJ=obj
BIN=bin


# attempting Generic code
$(BIN)/$(APP): $(OBJ)/%.o  
	$(CXX) $(CXXFLAGS) -o $@ $<

$(OBJ)/%.o: $(SRC)/%.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<


# Next Statements work Hard coded
#$(BIN)/$(APP): $(OBJ)/Craps.o $(OBJ)/Dice.o 
#	$(CXX) $(CXXFLAGS) -o $@ $<


#$(OBJ)/Craps.o: $(SRC)/Craps.cpp
#	$(CXX) $(CXXFLAGS) -o $@ -c $<


#$(OBJ)/Dice.o: $(SRC)/Dice.cpp
#	$(CXX) $(CXXFLAGS) -o $@ -c $<
# End Next Statements work hard coded

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


#clean:
#	rm -f $(OBJ)/*.o 
#	rm -f $(BIN)/*.exe
