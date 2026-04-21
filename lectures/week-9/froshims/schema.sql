-- froshims.db schema
-- To initialize a sqlite.db with this schema run: sqlite3 froshims.db < schema.sql

PRAGMA foreign_keys = ON;

CREATE TABLE registrants (
    id INTEGER, 
    name TEXT NOT NULL, 
    sport TEXT NOT NULL, 
    PRIMARY KEY(id)
)