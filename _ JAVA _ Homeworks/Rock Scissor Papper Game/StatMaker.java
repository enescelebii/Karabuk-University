
public class StatMaker {
	static void processMoves(Gamer g1,Gamer g2) {
		if(g1.sign == null || g2.sign == null || Arena.isGameOver == true) return;
		else if(g1.sign == g2.sign)
			Gamer.numOfDraw++;
		else if(g1.sign==HandSign.Papper && g2.sign == HandSign.ROCK)
			g1.numOfWin++;
		else if(g1.sign==HandSign.Scissor && g2.sign == HandSign.Papper)
			g1.numOfWin++;
		else if(g1.sign==HandSign.ROCK && g2.sign == HandSign.Scissor)
			g1.numOfWin++;
		else
			g2.numOfWin++;
		Gamer.numOfTrials++;
	}
	
	static void displayScores(Gamer g1,Gamer g2) {
		System.out.println(g1.name+" : "+g1.numOfWin + " %" + (Gamer.numOfTrials==0 ? 0: (float)g1.numOfWin/Gamer.numOfTrials)*100f);
		System.out.println(g2.name+" : "+g2.numOfWin + " %" + (Gamer.numOfTrials==0 ? 0: (float)g2.numOfWin/Gamer.numOfTrials)*100f);
		System.out.println("Num of draws: "+Gamer.numOfDraw);
	}
}
