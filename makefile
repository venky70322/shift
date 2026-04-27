compile:
	verilator -Wall --binary --trace --timing shift_register.v tb.v
run:
	./obj_dir/Vshift_register
all: compile run
