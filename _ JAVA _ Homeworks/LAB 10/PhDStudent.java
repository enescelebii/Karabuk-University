
public class PhDStudent extends MasterStudent implements ArticleScoreBehaviour{
	int numberOfArticles;
	public PhDStudent(int id, float mid, float fin, int numberOfArticles) {
		super(id, mid, fin, numberOfArticles);
		
	}

	
	@Override
	public float articleScore() {
		
		return numberOfArticles*8;
	}
	@Override
	float computeTotalScore() {
		
		return super.computeBaseScore() + articleScore();
	}

}
