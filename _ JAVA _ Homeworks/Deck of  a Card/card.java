public class card {
    private Suit suit;
    private Rank rank;

    public card(Suit suit, Rank rank) {
        this.suit = suit;
        this.rank = rank;
    }

    public Suit getSuit() {
        return suit;
    }

    public Rank getRank() {
        return rank;
    }

    public int getValue() {
        if (rank.equals("ACE")) {
            return 1;
        } else if (rank.equals("JACK") || rank.equals("QUEEN") || rank.equals("KING")) {
            return 10;
        } else {
            return rank.ordinal() + 1 ; // bu fonksiyon enum daki elemanlarin indisini veriyor
        }
    }

    public String toString() {
        return rank + " of " + suit;
    }
}