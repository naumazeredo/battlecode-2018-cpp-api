docs:
	doxygen Doxyfile
	moxygen -a -o DOCUMENTATION.md -l cpp xml/
