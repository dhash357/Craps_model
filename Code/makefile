CXX=g++
CXXFLAGS= -Wall

APP=Craps

SRC=src
H = h
OBJ=obj
BIN=bin

# Figure this out later to get a list of obj files based on the cpp files
#SRCS = $(wildcard $(SRC)/*.cpp)
#OBJS = $(patsubst $(SRC)/*.cpp , $(OBJ)/*.o , $(wildcard $(SRC)/*.cpp ))
SRCS = $(SRC)/Bet.cpp $(SRC)/BetList.cpp $(SRC)/BetType.cpp $(SRC)/Craps.cpp $(SRC)/Dice.cpp
OBJS = $(OBJ)/Bet.o $(OBJ)/BetList.o $(OBJ)/BetType.o $(OBJ)/Craps.o $(OBJ)/Dice.o
HS = $(H)/Bet.h $(H)/BetList.h $(H)/BetType.h $(H)/Craps.h $(H)/Dice.h

# attempting Generic code
$(BIN)/$(APP) : $(OBJS)  
	echo $(OBJS)
	echo $(BIN)/$(APP)
#	$(CXX) $(CXXFLAGS) -o $@ $<
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

$(OBJS) : $(SRCS) $(HS)
	$(CXX) $(CXXFLAGS) -o $(OBJS) -c $(SRCS)


# Test of linker command
#g++ -o bin/Craps obj/Craps.o obj/Dice.o obj/Bet.o obj/BetList.o obj/BetType.o 

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


clean:
	rm -f $(OBJ)/*.o 
	rm -f $(BIN)/*
