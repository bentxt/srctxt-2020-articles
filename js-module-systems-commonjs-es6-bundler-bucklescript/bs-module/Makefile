all:
	bsc lib.ml > lib.js
	bsc -I . main.ml > main.js
	esbuild --bundle --outfile=out.js main.js
	node out.js

clean:
	rm -f *.c*
	rm -f *.js
	rm -f out
