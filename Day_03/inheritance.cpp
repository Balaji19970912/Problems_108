import java.util.*;

abstract class Animal {
  abstract void walk();
  
  public void eat() {
    System.out.println("Eats");
  }
}

class Horse extends Animal {
  public void walk() {
    System.out.println("walk 4");
  }
}

class Chicken extends Animal {
  public void walk() {
    System.out.println("Walk 2");
  }
}

public class main {
    public static void main(String[] args) {
      Horse horse = new Horse();
      horse.walk();
      horse.eat();
      System.out.println("Hello, World!");
  }
}
