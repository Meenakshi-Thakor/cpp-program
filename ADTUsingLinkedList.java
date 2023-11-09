package packagecom.java;


class Node {
  String key;
  int value;
  Node next;
  Node(String key,int value){
    this.key = key;
    this.value = value;
    this.next = null;
  }  
}
class linkedListDictionary {
    private Node head;
    public void insert(String key,int value){
        Node newNode = new Node(key,value);
        if (head == null){
         head = newNode;   
        }else{
            Node current = head;
            Node prev = null;
            while (current != null){
                if (current.key.equals(key)){
                    current.value = value;
                    return;
                }
                prev = current;
                current = current.next;
            }
            if (prev != null){
                prev.next = newNode;
            }
        }
    }
    public int get(String key){
       Node current = head;
       while (current != null){
        if (current.key.equals(key)){
            return current.value;
        }
        current = current.next;
       } 
       return -1;
    }
    public void remove(String key){
        if (head == null){
            return;
        }  
    if (head.key.equals(key)){
        head = head.next;
        return;
    }
    Node current = head;
    Node prev = null;
    while (current != null){
        if (current.key.equals(key)){
            prev.next = current.next;
            return;
        }
        prev = current;
        current = current.next;
    }
    }
    public boolean contains(String key){
        Node current = head;
        while (current != null){
            if (current.key.equals(key)){
                return true;
            }
            current = current.next;
        }
        return false;
    }
    public void display(){
        Node current = head;
        while (current != null){
            System.out.println(current.key + " " + current.value);
            current = current.next;
        }
    }
    public static void main(String[] args){
    linkedListDictionary myDictionary = new linkedListDictionary() ;
        myDictionary.insert("name", 42);
        myDictionary.insert("age", 30);
        myDictionary.insert("city", 100);
        myDictionary.display();
        System.out.println("Value for 'name' " + myDictionary.get("name"));
        System.out.println("Value for 'country' " + myDictionary.get("country"));
        myDictionary.remove("age");
        myDictionary.display();
        System.out.println("Contains 'age' " + myDictionary.contains("age"));
        System.out.println("Contains 'city' " + myDictionary.contains("city"));
}
    }

