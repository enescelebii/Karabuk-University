
public class RockPapperScissorGame {

	public static void main(String[] args) {
		Gamer g1 = new Gamer("gamer 1");
		Gamer g2 = new Gamer("gamer 2");
		Arena arena = new Arena();
		arena.addGamers(g1, g2);
		arena.startGame();
	}

}
