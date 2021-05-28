.PHONY:		all re clean fclean
all:
	@mkdir -p build && cd build && cmake .. && make && mv factorial ..
clean:
	@find . -name *.o -delete
fclean:
	@rm -rf build && rm -rf factorial && rm -rf factorial.dSYM
re:			fclean all