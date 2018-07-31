# Tree

```java
package javaapplication1;

import java.util.*;

public class JavaApplication1 {

    public static void main(String[] args) {
        // TODO code application logic here
        
        Set<String> set = new HashSet<String>();
        
        set.add("London");
        set.add("Paris");
        set.add("San Francisco");
        set.add("New York");
        set.add("Miami");
        set.add("New York");
        
        TreeSet<String> treeSet = new TreeSet<String>(set);
        System.out.println("Sorted tree set: " + treeSet);
        
        
        System.out.println("first(): "+ treeSet.first());
        System.out.println("last(): " + treeSet.last());
        System.out.println("headSet(\"New York\"): ");
        
    }
    
}
```
