
public class Arena {
	static boolean isGameOver;
	Gamer gamer1,gamer2;
	
	void addGamers(Gamer g1,Gamer g2) {
		this.gamer1=g1;
		this.gamer2=g2;
	}
	void startGame() {
		while(!isGameOver) {
			gamer1.move();
			gamer2.move();
			StatMaker.processMoves(gamer2, gamer1);
			StatMaker.displayScores(gamer2, gamer1);
		}
	}
}
