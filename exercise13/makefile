CC = g++
CFLAGS = -Wall
SRCDIR = .
BINDIR = .

# Tìm tất cả các file .cpp trong thư mục src
SOURCES = $(wildcard $(SRCDIR)/*.cpp)

# Xây dựng đường dẫn tới các file .o tương ứng
OBJECTS = $(patsubst $(SRCDIR)/%.cpp,$(BINDIR)/%.o,$(SOURCES))

# Tên chương trình đầu ra
TARGET = main

# Phần biên dịch
all: $(TARGET) clean
	main.exe
	

$(TARGET): $(OBJECTS)
	@$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

$(BINDIR)/%.o: $(SRCDIR)/%.cpp
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@rm -f $(OBJECTS)

