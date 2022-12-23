#ifndef TRACKDATA_H
#define TRACKDATA_H

#include <QString>
#include <QtMultimedia/QMediaMetaData>

class TrackData
{
public:
    QString artist;
    QString genre;
    double sizeTrack;
    TrackData();
};

#endif // TRACKDATA_H
