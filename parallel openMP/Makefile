particle: particle.c
	 gcc-10 particle.c -o particle
particle_omp: particle.c
	gcc-10 -fopenmp particle.c -o particle_omp

run: particle
	./particle 2000 100 100 10 5
	cat solution.txt
	python plot_solution.py solution.txt

run_omp: particle_omp
	./particle_omp 20000 100 100 10 5
	cat solution.txt
	python plot_solution.py solution.txt

