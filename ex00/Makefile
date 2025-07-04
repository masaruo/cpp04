# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 14:12:23 by mogawa            #+#    #+#              #
#    Updated: 2024/02/07 11:12:38 by mogawa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET		:=	$(notdir $(shell pwd))
CXX			:=	c++
CXXFLAGS	:=	-Wall -Wextra -Werror -std=c++98 -MMD -MP
LDFLAGS		:=	
GTEST_INC	:=	-I../googletest/googletest/include -I../googletest/googlemock/include
GTEST_LIB	:=	-L../googletest/build/lib
INC			:=	-I../include
SRC			=	 \
				Animal.class.cpp \
				Dog.class.cpp \
				Cat.class.cpp \
				WrongAnimal.class.cpp \
				WrongCat.class.cpp \
				main.cpp
SRCDIR		:=	.
OBJDIR		:=	obj
OBJ			:=	$(SRC:%.cpp=$(OBJDIR)/%.o)
DEP			:=	$(SRC:%.cpp=$(OBJDIR)/%.d)

ifdef WITH_GTEST
CXXFLAGS	:=	-Wall -Wextra -std=c++17 $(GTEST_INC) -g3 -O0
LDFLAGS		:=	$(GTEST_LIB) -lpthread -lgtest -lgtest_main -lgmock 
SRC			=	Fixed.gtest.cpp Fixed.cpp
endif

ifdef WITH_LEAK
CXXFLAGS	=	-Wall -Wextra -g3 -O0 -DLEAK
endif

ifdef WITH_ASAN
CXXFLAGS	=	-Wall -Wextra -g3 -O0 -fsanitize=address
endif

all: $(TARGET)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) $(INC) -c $< -o $@

$(TARGET):	$(OBJ)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

# gtest: fclean
# 	$(MAKE) all WITH_GTEST=1
# 	./$(TARGET)

leak: fclean
	$(MAKE) all WITH_LEAK=1

debug: fclean
	$(MAKE) all WITH_ASAN=1

clean:
	$(RM) -r $(OBJDIR)

fclean: clean
	$(RM) $(TARGET)

re: fclean
	$(MAKE) all

dev: all
	./$(TARGET)

-include $(DEP)

.PHONY: clean fclean re gtest
