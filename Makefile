
ff=signal1
src=$(ff).c pu.h
$(ff):$(src)
	gcc -Wall -g -o $(ff) $(src)
