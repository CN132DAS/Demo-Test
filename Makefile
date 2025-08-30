all: main.cpp Exam.cpp ExamPart.cpp Player.cpp
	g++ $^ -o game
clean:
	rm game