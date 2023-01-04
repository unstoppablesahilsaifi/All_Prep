// Spring MVC is bascially module(sub framework) of spring by which we can create the java web application.
// Its is build on servlet API 

Group id- used to identify your projects uniquely
Artifact id- projects name


String q= "CREATE TABLE BOOKS " +
                   "(id INTEGER not NULL AUTO_INCREMENT, " +
                   " book_name VARCHAR(255) not NULL, " + 
                   " description VARCHAR(255) not NULL, " + 
                   " author_name VARCHAR(255) not NULL, " +
                   " category VARCHAR(255) not NULL, " +
                   " PRIMARY KEY ( id ),"+
                   " unique index book_name_unique (book_name ASC)visible)";
