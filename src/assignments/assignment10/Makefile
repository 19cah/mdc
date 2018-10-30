CXX=g++
RM=rm -f
CPPFLAGS=-Wall -Werror

SRCS=main.cpp
OBJS=$(subst .cpp,.o,$(SRCS))

all: tool

tool: $(OBJS)
	$(CXX) $(CPPFLAGS) -o assigment $(OBJS)

depend: .depend

.depend: $(SRCS)
	$(RM) ./.depend
	$(CXX) $(CPPFLAGS) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS)

distclean: clean
	$(RM) *~ .depend

include .depend
