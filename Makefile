CXX = g++
CXXFLAGS = -std=c++20 -Wall
SRCS = exceptions/notSufficientQuantityException.cpp exceptions/productNotFoundException.cpp src/inventory.cpp src/item.cpp src/product.cpp src/user.cpp driver/main.cpp 
OBJS = $(SRCS:.cpp=.o)
INCLUDES = -I includes 
all: ecomm

ecomm: ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ecomm

%.o: %.cpp
	${CXX} ${CXXFLAGS} ${INCLUDES} -c $< -o $@

clean:
	rm -f ${OBJS} ecomm