program_name =  megaphone
src = main.cpp
flags = -Wall -Wextra -Werror -std=c++98
compiler = g++

$(program_name):main.cpp
	$(compiler) $(flags)    $(src)  -o  $(program_name)

clean:$(program_name)
	rm -rf $(program_name)
re:clean
	$(compiler) $(flags)    $(src)  -o  $(program_name)
