enum Suit{
	DIAMOND, CLUB, HEART, SPADE;
}
enum Rank{
	ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING;
}
public class deck {
    private card[] cards;

    public deck() {
        initializeDeck();
    }

    private void initializeDeck() {
    	Suit[] suits = Suit.values();
    	Rank[] ranks = Rank.values();
        cards = new card[52];
        int a = 0;

       for(Suit suit : suits) {
    	   for (Rank rank: ranks) {
               cards[a] = new card(suit, rank);
               a++;
           }
       }
    }

    public void print() {
        for (card card : cards) {
            System.out.println(card.toString());
        }
    }
}