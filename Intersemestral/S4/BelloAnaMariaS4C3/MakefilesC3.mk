resultados.pdf : resultados.tex plotdatos.py plotdatos1.py
	pdflatex resultados.pdf
plot.pdf: plotdatos.py datos.dat
	python plotdatos > datos.dat
plot1.pdf: plotdatos1.py datos1.dat
	python plotdatos1.py > datos1.dat




