OBJ = main.o
CC = g++

compile: $(OBJ)
	@echo "[CPP] Link thecastle...    |"
	@$(CC) -fpermissive -lncurses -lmenu -o thecastle main.o
	@echo "[CPP] Finished!            |"
	@echo "––––––––––––––––––––––––––––"
	@rm main.o

main.o:
	@clear
	@echo "––––––––––––––––––––––––––––"
	@echo "[CPP] Compile thecastle... |"
	@$(CC) -fpermissive -lncurses -lmenu -c main.cpp
	@echo "[CPP] Finished!            |"
	@echo "––––––––––––––––––––––––––––"

test: compile
	@echo "[MK] Running the Game.... |"
	@echo "============================"
	@./thecastle
	@echo "============================"
	@echo "[MK] END                   |"
	@echo "––––––––––––––––––––––––––––"

install: compile
	@echo "[CP] thecastle /bin/       |"
	@sudo cp thecastle /bin/
	@echo [CP] Finished!              |
	@echo "[CP] END                   |"
	@echo "––––––––––––––––––––––––––––"

push: compile
	git add *
	git commit -m "Updated!"
	git push
