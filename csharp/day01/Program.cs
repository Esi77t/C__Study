public partial class Program
{
    public static void Main(string[] args)
    {
        // Product 클래스 인스턴스 생성
        Product product1 = new Product
        {
            Name = "노트북",
            Price = 1200.50,
            Quantity = 1
        };

        Product product2 = new Product
        {
            Name = "마우스",
            Price = 25.0,
            Quantity = 5
        };

        Product product3 = new Product
        {
            Name = "맥북",
            Price = 1099.99,
            Quantity = 5
        };

        Product product4 = new Product
        {
            Name = "키보드",
            Price = 75.0,
            Quantity = 10
        };

        // List<Product> 컬렉션 초기화, 인스턴스 추가
        List<Product> cart = new List<Product> { product1, product2, product3, product4 };

        // LINQ를 사용해 총 가격 계산(Java의 reduce와 비슷)
        // Func<TSource, TResult> 형태의 메서드를 람다식으로 전달하는 방식
        double totalPrice = cart.Sum(p => p.Price * p.Quantity);
        Console.WriteLine($"총 가격 : {totalPrice:C}");  // C#의 문자열 보간과 통화 형식 지정

        // LINQ를 사용하여 수량이 5개 이상인 상품 필터링
        // LINQ 쿼리 구문
        var quantityFiveQuery = from product in cart where product.Quantity >= 5 select product;
        var quantityFiveMethod = cart.Where(product => product.Quantity > 5);

        // LINQ를 사용하여 가격이 1000 이상인 상품 필터링
        var priceThQuery = from product in cart where product.Price >= 1000 select product;
        var PriceThMethod = cart.Where(product => product.Price >= 1000).ToList();

        // LINQ를 사용하여 총 수량 필터링
        var totalQuantity = cart.Sum(p => p.Quantity);

        Console.WriteLine("\n수량이 5개 이상인 상품 목록 : ");
        foreach (var product in quantityFiveMethod)
        {
            Console.WriteLine($"- {product.Name} (수량: {product.Quantity})");
        }

        Console.WriteLine("\n가격이 1000 이상인 상품 : ");
        foreach (var product in PriceThMethod)
        {
            Console.WriteLine($"- {product.Name} (가격: {product.Price})");
        }

        Console.WriteLine($"\n- 모든 상품 총 수량 : {totalQuantity}");
    }
}