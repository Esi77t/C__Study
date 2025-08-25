// 프로퍼티(Property)
// 자바에서는 클래스 변수에 접근하기 위해서 getter, setter 메서드를 사용했지만 
// C#은 프로퍼티 문법을 활용해 훨씬 간결하게 처리할 수 있다.

// Java
// public class Person {
//     private String name;

//     public String getName() {
//         return name;
//     }

//     public String setName(String name) {
//         this.name = name;
//     }
// }

// C#
public class Person
{
    private string Name { get; set; }

}