// LINQ
// 데이터 컬렉션을 쿼리하고 조작하는데 사용한다.
// 자바의 스트림API(Stream API)와 비슷한 역할을 하지만 SQL처럼 직관적인 쿼리 구문을 사용할 수 있다는 장점이 있다.

// Java
// List<Integer> numbers = Arrays.asList(1, 2, 3, 4, 5);
// List<Integer> evenNumbers = numbers.stream().filter(n->n % 2 == 0).collect(Collectors.toList());

// C#
List<int> numbers = new List<int> { 1, 2, 3, 4, 5 };
var evenNumbers = from n in numbers where n % 2 == 0 select n;