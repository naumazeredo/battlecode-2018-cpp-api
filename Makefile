docs:
	tail -n +24 bc.hpp > bc_p.hpp
	g++ -C -E bc_p.hpp > bc_.hpp
	doxygen Doxyfile
	moxygen -a -o DOCUMENTATION.md -l cpp xml/
	sed -i 's/{[^}]*}//' DOCUMENTATION.md
	rm bc_*.hpp
