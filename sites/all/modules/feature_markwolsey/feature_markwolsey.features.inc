<?php
/**
 * @file
 * feature_markwolsey.features.inc
 */

/**
 * Implements hook_views_api().
 */
function feature_markwolsey_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_markwolsey_image_default_styles() {
  $styles = array();

  // Exported image style: detail_image.
  $styles['detail_image'] = array(
    'label' => 'Detail image',
    'effects' => array(
      3 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 375,
          'height' => 260,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'detail_image',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: listing_image.
  $styles['listing_image'] = array(
    'label' => 'Listing image',
    'effects' => array(
      2 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 320,
          'height' => 200,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'listing_image',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: other_images.
  $styles['other_images'] = array(
    'label' => 'Other images',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 218,
          'height' => 160,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'other_images',
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}
