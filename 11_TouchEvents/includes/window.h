#ifndef WINDOW_H
#define WINDOW_H

#include <OpenGLWindow>

class KUpdateEvent;

class WindowPrivate;
class Window : public OpenGLWidget
{
  Q_OBJECT

public:
  Window(QWidget *parent = 0);
  ~Window();

protected:

  // OpenGL Methods
  void initializeGL();
  void resizeGL(int width, int height);
  void paintGL();
  void teardownGL();

  // Events
  void updateEvent(KUpdateEvent *event);

private:
  WindowPrivate *m_private;
};

#endif // WINDOW_H