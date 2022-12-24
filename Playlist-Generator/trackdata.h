#ifndef TRACKDATA_H
#define TRACKDATA_H

#include <QString>
#include <QtMultimedia/QMediaMetaData>
#include <QtMultimedia/QMediaPlayer>

class TrackData
{
public:
    QString artist;
    QString genre;
    double sizeTrack;
    TrackData();
private:

};

#endif // TRACKDATA_H
