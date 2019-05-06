int priority();
void processWidget(std::shared_ptr<Widget> pw, int priority);
...
processWidget(std::shared_ptr<Widget>(new Widget), priority());
