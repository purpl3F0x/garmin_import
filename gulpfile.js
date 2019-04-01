const gulp = require('gulp');
const rename = require('gulp-rename');

gulp.task('default', function () {
    return gulp.src('./cmake-build-release/libttbin.so')
        .pipe(rename('ttbin.pyd'))
        .pipe(gulp.dest('.'));
});