CREATE TABLE people (
    id INTEGER PRIMARY KEY,
    firstname VARCHAR(50) NOT NULL,
    lastname VARCHAR(50) NOT NULL
);

INSERT INTO people (id, firstname, lastname) VALUES
    (1, 'Emma', 'Johnson'),
    (2, 'Liam', 'Smith'),
    (3, 'Olivia', 'Garcia'),
    (4, 'Noah', 'Williams'),
    (5, 'Ava', 'Brown');
