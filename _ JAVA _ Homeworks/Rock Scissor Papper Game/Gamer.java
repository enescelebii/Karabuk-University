import java.util.Scanner;

public class Gamer {
	static int numOfDraw;
	static int numOfTrials;
	int numOfWin;
	String name;
	HandSign sign;
	
	
	Gamer(String name){
		this.name = name;
	}
	void move() {
		boolean isInputValid=false;
		Scanner input = new Scanner(System.in);
		System.out.println(this.name+" please enter p: paper s: scissor r: rock  q: quit");
		do {
			char inChar = input.next().toLowerCase().charAt(0);
			switch(inChar) {
			case 'q':
				Arena.isGameOver = true;
				break;
			case 'p':
				sign=HandSign.Papper;
				break;
			case 'r':
				sign=HandSign.ROCK;
				break;
			case 's':
				sign=HandSign.Scissor;
				break;
			default:
				System.out.println("your input is invalid. Please try again");
				isInputValid = true;
				break;
			}
		}while(isInputValid);
	}
}
