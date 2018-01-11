docs:
	tail -n +24 bc.hpp > bc_p.hpp
	g++ -E bc_p.hpp > bc_.hpp
	doxygen Doxyfile
	moxygen -a -o DOCUMENTATION.md -l cpp xml/
	rm bc_*.hpp
