
public class post_office {
	String name;
	post_office(String name){
		this.name= name ;
	}
	void send(post post) {
		if (post.sourceAddress.equals(this.name)) {
            System.out.println("Gönderme işlemi gerçekleştirildi. Gönderilen mesaj: " + post.message);
        } else {
            System.out.println("Gönderme işlemi başarısız. Bu post ofisinden gönderilemez.");
        }
	}
	void recieve(post post) {
        System.out.println("Alma işlemi gerçekleştirildi. Alınan mesaj: " + post.message);
	}
}
