CXX = g++
CXXFLAGS = -std=c++17


SRC = main.cpp Card.cpp Hand.cpp Deck.cpp Player.cpp Dealer.cpp
OUT = game

all: $(OUT)

$(OUT): $(SRC)
	$(CXX) $(SRC) $(CXXFLAGS) $(LDFLAGS) -o $(OUT)

run: $(OUT)
	./$(OUT)

clean:
	rm -f $(OUT)
